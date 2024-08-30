# Flash keyboard and dongle firmware

Before flashing the `keyboard firmware` and `dongle firmware`, you must flash the `reset file` to all devices.

## Prepare files

- need the keyboard `firmware.zip` files

### Unzip the firmware archive

```bash
unzip firmware.zip
```

### Convert RESET.bin file to RESET.uf2 file

- need [Python 9.0](https://www.python.org/downloads/release/python-390/) installed and added to the PATH
- need [uf2conv](https://github.com/microsoft/uf2/blob/master/utils/uf2conv.py) and [uf2families](https://github.com/microsoft/uf2/blob/master/utils/uf2families.json) python scripts
- locate python scripts and `reset file` in the same directory

```bash
py uf2conv.py RESET.bin --convert --output=RESET.uf2
```

#### Convert RESET.bin and DONGLE.bin files to .hex files

- need [arm-none-eabi-objcopy](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) installed and added to the PATH

```bash
arm-none-eabi-objcopy -I binary -O ihex RESET.bin RESET.hex
arm-none-eabi-objcopy -I binary -O ihex DONGLE.bin DONGLE.hex
```

### Encapsulate RESET.hex and DONGLE.hex files in .zip files

```bash
nrfutil pkg generate --hw-version 52 --sd-req 0x00 --application RESET.hex --application-version 1 RESET.zip
nrfutil pkg generate --hw-version 52 --sd-req 0x00 --application DONGLE.hex --application-version 1 DONGLE.zip
```

### Delete RESET and DONGLE .bin and .hex files

```bash
del RESET.bin
del DONGLE.bin
del RESET.hex
del DONGLE.hex
```


## Dongle flashing

- flash the reset file
- flash the firmware file

### Connect the dongle in DFU mode

- hold the RESET button while connecting the dongle
- the dongle led should blink slowly

## Find the dongle's COM number

- use the peripheral mangager
- or use the following command

```bash
mode
```

### Flash the RESET.zip file to the dongle

- need `nrfutil` python package, install with `pip install nrfutil`
- replace the `COM5` with the dongle's COM number

```bash
nrfutil dfu usb-serial -pkg RESET.zip -p COM5
```

### Reconnect dongle in DFU mode

- disconnect the dongle
- reconnect the dongle in DFU mode
- check the dongle's led is blinking slowly
- check the dongle's COM number

### Flash the DONGLE.zip file to the dongle

```bash
nrfutil dfu usb-serial -pkg DONGLE.zip -p COM5
```


## Keyboard flashing

- flash the reset file to both halves
- flash the firmware file to both halves

### Flash the RESET.uf2 and LEFT/RIGHT.uf2 files to both keyboard halves

- connect a keyboard halve with an USB cable
- put the keyboard halve in DFU mode
  - double tap the reset button
  - a peripheral appear in explorer
- drag and drop an .uf2 file to the peripheral

- do this process one time with RESET.uf2 for both halves
- repeat this process a second time with LEFT.uf2 and RIGHT.uf2 files for the corresponding halves

### Delete RESET.uf2 and LEFT/RIGHT.uf2 files

```bash
del RESET.uf2
del LEFT.uf2
del RIGHT.uf2
```
