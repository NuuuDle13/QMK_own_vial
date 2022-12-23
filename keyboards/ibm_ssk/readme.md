# ibm_ssk

![ibm_ssk](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [RoastPotatoes](https://github.com/RoastPotatoes)
* Hardware Supported: Aftermarket Model M Controller from Taobao uses stm32f401
* Hardware Availability: [taobao link](https://h5.m.goofish.com/item?id=656161512104&spm=widle.12011849.0.0)

Make example for this keyboard (after setting up your build environment):

    make ibm_ssk:default

Flashing example for this keyboard:

    make ibm_ssk:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
