# Flash keyboard and dongle firmware

Before flashing the `keyboard firmware` and `dongle firmware`, you must flash the `reset file` to all devices.




## Prepare files

Download your keyboard `firmware.zip` files and unzip it.

Convert RESET.bin file to RESET.uf2 file.

Required:
- [Python 9.0](https://www.python.org/downloads/release/python-390/) installed and added to the PATH
- [uf2conv](https://github.com/microsoft/uf2/blob/master/utils/uf2conv.py) `.py` script file
- [uf2families](https://github.com/microsoft/uf2/blob/master/utils/uf2families.json) `.json` script file
- `uf2conv`, `uf2families` and `RESET.bin` must be in the same directory

```bash
py uf2conv.py RESET.bin --convert --output=RESET.uf2
```

Convert RESET/DONGLE.bin files to RESET/DONGLE.hex files.

Required:
- [arm-none-eabi-objcopy](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) installed and added to the PATH

```bash
arm-none-eabi-objcopy -I binary -O ihex RESET.bin RESET.hex
arm-none-eabi-objcopy -I binary -O ihex DONGLE.bin DONGLE.hex
```

Encapsulate RESET/DONGLE.hex files in RESET/DONGLE.zip files.

```bash
nrfutil pkg generate --hw-version 52 --sd-req 0x00 --application RESET.hex --application-version 1 RESET.zip
nrfutil pkg generate --hw-version 52 --sd-req 0x00 --application DONGLE.hex --application-version 1 DONGLE.zip
```



## Dongle flashing

Required:
- `nrfutil` python package, `pip install nrfutil` to install

Connect the dongle in `DFU mode`:
- hold the RESET button while connecting the dongle
- the dongle led should blink slowly

Find the dongle's COM number:
- use the `peripheral mangager` or use the `mode` command
- replace the `COM5` with the correct COM number

Flash the `RESET.zip` file.

```bash
nrfutil dfu usb-serial -pkg RESET.zip -p COM5
```

Repeat the above process a second time, then flash the `DONGLE.zip` file.

```bash
nrfutil dfu usb-serial -pkg DONGLE.zip -p COM5
```



## Keyboard flashing

- Connect a keyboard halve with an USB cable
  
- Put the keyboard halve in DFU mode:
  - double tap the reset button
  - a peripheral appear in explorer

- drag and drop an `.uf2` file to the peripheral

Do this process one time with `RESET.uf2` for both halves.

Repeat this process a second time with `LEFT.uf2` and `RIGHT.uf2` files for the corresponding halves.

