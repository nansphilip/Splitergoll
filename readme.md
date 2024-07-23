# Splitergoll keyboard

Welcome to the Splitergoll Project: a column staggered split keyboard working with the ZMK Fiemware.

- `split` : A split keyboard, one part for each hand
- `ergo` : An ergonomic keyboard with a column staggered layout
- `ll` : Low latency, requires a dongle to improve battery life and Bluetooth latency

In this repository, you will find:

- The `electronic PCB design` files created with KiCad
- The `3D printable case design` files designed using Fusion 360
- The complete [ZMK firmware](https://github.com/zmkfirmware/zmk) configuration for the **Splitergoll**.

<div>
    <img src="/Images/IMG_7786.webp"/>
    <div style="display: flex; flex-direction: row; justify-content: space-between;">
        <img src="/Images/IMG_7666.webp" width="49.5%"/>
        <img src="/Images/IMG_7669.webp" width="49.5%"/> 
    </div>
    <div style="display: flex; flex-direction: row; justify-content: space-between;">
        <img src="/Images/IMG_7670.webp" width="49.5%"/>
        <img src="/Images/IMG_7671.webp" width="49.5%"/> 
    </div>
    <img src="/Images/IMG_7981.webp"/>
</div>

## Licenses and Inspirations

Details coming soon...

## Git Branches

- [main](https://github.com/nansphilip/Splitergoll/tree/main) → Bluetooth wireless keyboard
- [dongle](https://github.com/nansphilip/Splitergoll/tree/dongle) → Dongle wireless keyboard (work in progress...)

## Todo

- [x] Global configuration: Bluetooth and USB
- [x] Switches and encoders pin connections
- [x] Battery level and sleep mode
- [x] Layer inheritance and conditions
- [x] Accents, symbols, movements
- [x] Gaming compatibility

- [ ] macOS compatibility
- [ ] Dongle mode
- [ ] Switch Bluetooth device
- [ ] Bluetooth Low Energy?

## Layout

This keyboard is compatible with `Windows` (default) and `MacOS` (soon).
It is optimized for `desktop`, `programming`, `gaming`, and `multimedia`.

Some shortcuts and modifiers may be different:

- `CTRL` key is replaced by the `command` key
- `ALT` key is replaced by the `option` key
- `WINDOWS` key is replaced by the `control` key

This keyboard works with 4 layers:

- `DEFAULT`: letters and most used punctuation
- `PRIMARY`: text editor movements, desktop management, and all programming symbols
- `SECONDARY`: accented letters, calculation symbols, and numbers
- `TERTIARY`: miscellaneous shortcuts, macros, etc.

During your reading, you will find these symbols:

- `+` means [tap dance](https://zmk.dev/docs/behaviors/tap-dance)
- `→` means [hold tap](https://zmk.dev/docs/behaviors/hold-tap)
- `or` means [shift morph tap](https://zmk.dev/docs/behaviors/mod-morph)

### Default layer

> Philosophy

The default layer contains all letters and the most frequent punctuation symbols. This main layer can be shifted to access uppercase letters and shift-morphed symbols.

The modifiers `SHIFT`, `L1`, and `L2` can be locked (toggle → press modifier) by tap dance patterns (follow the `Lock usage` section below).
You can easily unlock them (toggle → release modifier) by a single tap on the respective keys.

> Shortcuts

#### Basic usage

- `SHIFT` to shift layer
- `L1` to layer 1
- `L2` to layer 2
- `L1` + `L2` to layer 3

#### Alternative usage

- `L1` + `L1` to layer 2
- `L2` + `L2` to layer 1

#### Lock usage

- `SHIFT` + `SHIFT` to LOCK shift layer
- `SHIFT` to UNLOCK shift layer

- `L1` + `L1` + `L1` to LOCK layer 1
- `L1` to UNLOCK layer 1

- `L2` + `L2` + `L2` to LOCK layer 2
- `L2` to UNLOCK layer 2

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃    ESC    ┃     A     ┃     Z     ┃     E     ┃     R     ┃     T     ┃   ┃     Y     ┃     U     ┃     I     ┃     O     ┃     P     ┃   BSPACE  ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃    TAB    ┃     Q     ┃     S     ┃     D     ┃     F     ┃     G     ┃   ┃     H     ┃     J     ┃     K     ┃     L     ┃     M     ┃    DEL    ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃     W     ┃     X     ┃     C     ┃     V     ┃     B     ┃   ┃     N     ┃  , or ?   ┃  . or !   ┃  ; or /   ┃  : or \   ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ VOL+  │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ LEFT  │
│ VOL-  │ ┃ Play→Mute ┃ ┃   CTRL    ┃    ALT    ┃  L2 + L1  ┃   SPACE   ┃   ┃SHIFT+LOCK ┃  L1 + L2  ┃   ENTER   ┃    WIN    ┃ ┃ To MACOS  ┃ │ RIGHT │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```

### Primary layer

> Philosophy

The first layer is optimized for programming: directional arrows, word jump shortcuts, home and end line, and every symbol.

> Shortcuts

- `L1` + `SHIFT²` + `←, ↑, ↓ or →` to select text
- `L1` + `ALT` + `↑ or ↓` to move up/down a row
- `L1` + `ALT` + `SHIFT` + `↑ or ↓` to duplicate a row
- `L1` + `ALT` + `CTRL` + `↑ or ↓` to create multiline cursor

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃           ┃Del desktop┃   HOME    ┃Show desktp┃    END    ┃New desktop┃   ┃     "     ┃     (     ┃     )     ┃     [     ┃     ]     ┃           ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃           ┃Left desktp┃     ←     ┃     ↑     ┃     →     ┃Right deskp┃   ┃     '     ┃     {     ┃     }     ┃     <     ┃     >     ┃           ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃           ┃  CTRL ←   ┃     ↓     ┃   CTRL →  ┃           ┃   ┃     `     ┃     #     ┃     &     ┃     |     ┃     @     ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ LEFT  │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ UP    │
│ RIGHT │ ┃           ┃ ┃           ┃           ┃           ┃   SHIFT²  ┃   ┃   SHIFT   ┃     L1    ┃           ┃           ┃ ┃ "Windows" ┃ │ DOWN  │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```

### Secondary layer

> Philosophy

The second layer contains all French accents on the left side, and a numpad with calculation symbols on the right side.

Accented letters are positioned by frequency and sorted by letter and accent.
You have to single, double, or triple click to reach even keys.

> Shortcuts

Common use case:

- `L2` + `CTRL` + `+` to zoom in
- `L2` + `CTRL` + `-` to zoom out
- `L2` + `SPACE` to space, useful with numpad

Left hand on keyboard, and right hand on mouse:

- `L2` + `CTRL` + `/` to comment/uncomment (add it to VSCode settings)
- `L2` + `ENTER` to return
- `L2` + `BSPACE` to backspace
- `L2` + `DEL` to delete

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃   BSPACE* ┃   œ + Œ   ┃ ° + ² + ³ ┃     _     ┃     -     ┃     +     ┃   ┃     =     ┃     7     ┃     8     ┃     9     ┃   € + £   ┃           ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃    DEL*   ┃   ô + Ô   ┃   é + É   ┃   ê + Ê   ┃   è + ë   ┃     *     ┃   ┃     0     ┃     4     ┃     5     ┃     6     ┃     $     ┃           ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃   î + ï   ┃ ù + û + μ ┃   ç + Ç   ┃ à + À + â ┃     /     ┃   ┃     .     ┃     1     ┃     2     ┃     3     ┃     %     ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ LEFT  │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ UP    │
│ RIGHT │ ┃           ┃ ┃           ┃           ┃     L2    ┃   ENTER   ┃   ┃   SPACE   ┃           ┃           ┃           ┃ ┃           ┃ │ DOWN  │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```

### Tertiary layer

> Philosophy

The third layer is used for complex shortcuts, arrow characters, and still contains empty keys that are waiting to find a utility.

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃    F1     ┃    F2     ┃    F3     ┃    F4     ┃    F5     ┃    F6     ┃   ┃    F7     ┃    F8     ┃    F9     ┃    F10    ┃    F11    ┃    F12    ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃   Reset   ┃           ┃     ←     ┃     ↑     ┃     →     ┃Rec Screen ┃   ┃           ┃           ┃           ┃           ┃           ┃ ALT + F4  ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃           ┃           ┃     ↓     ┃           ┃Print Scree┃   ┃           ┃           ┃           ┃           ┃           ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ UP    │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ LEFT  │
│ DOWN  │ ┃ Bootloader┃ ┃   CTRL    ┃    ALT    ┃     L3    ┃           ┃   ┃   SHIFT   ┃     L3    ┃           ┃   To L8   ┃ ┃Del BT link┃ │ RIGHT │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```

### Gaming layer

> Philosophy

The gaming layer must be designed to prevent accidental clicks: wrong clicks, unwanted shortcuts, etc.
However, it should still be comprehensive enough to facilitate easy communication in gaming chats.

The `ESC` key is too close to the other frequently used keys. The `ESC` key needs to be held for 200ms to be pressed.

The `CTRL`, `ALT`, and `L3` keys are replaced with non-modifier keys.

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃ (Tab)→ESC ┃     A     ┃     Z     ┃     E     ┃     R     ┃     T     ┃   ┃     Y     ┃     U     ┃     I     ┃     O     ┃     P     ┃   BSPACE  ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃    Tab    ┃     Q     ┃     S     ┃     D     ┃     F     ┃     G     ┃   ┃     H     ┃     J     ┃     K     ┃     L     ┃     M     ┃    DEL    ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃     W     ┃     X     ┃     C     ┃     V     ┃     B     ┃   ┃     N     ┃  , or ?   ┃  . or !   ┃  ; or /   ┃  : or \   ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ VOL+  │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ VOL+  │
│ VOL-  │ ┃   To L0   ┃ ┃     +     ┃     -     ┃     '     ┃   SPACE   ┃   ┃   SHIFT   ┃     L9    ┃   ENTER   ┃    WIN    ┃ ┃           ┃ │ VOL-  │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```

### Gaming layer 2

> NVidia Shortcuts

- `NV_Scrn` to take screenshot
- `NV_FPS` to show performance panel
- `NV_Swth` to toggle performance panel content
- `NV_Strt` to start recording
- `NV_Save` to save recording
- `NV_Dsh` to show dashboard

```keymap
┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃           ┃           ┃           ┃           ┃           ┃           ┃   ┃     "     ┃ NV Screen ┃           ┃           ┃           ┃           ┃
┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃           ┃           ┃           ┃           ┃           ┃           ┃   ┃     '     ┃NV StartRec┃ NV SaveRec┃           ┃           ┃           ┃
┗━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫   ┣━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┛
            ┃           ┃           ┃           ┃           ┃           ┃   ┃NVidia FPS ┃NV Dashboad┃ NV Switch ┃           ┃           ┃
╭───────╮   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ╭───────╮
│ VOL+  │ ┏━━━━━━━━━━━┓ ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓   ┏━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓ ┏━━━━━━━━━━━┓ │ VOL+  │
│ VOL-  │ ┃           ┃ ┃   CTRL    ┃    ALT    ┃           ┃           ┃   ┃           ┃     L9    ┃           ┃           ┃ ┃           ┃ │ VOL-  │
╰───────╯ ┗━━━━━━━━━━━┛ ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛   ┗━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛ ┗━━━━━━━━━━━┛ ╰───────╯
```
