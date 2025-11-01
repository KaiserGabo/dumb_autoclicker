# dumb_autoclicker
A really dumb mouse autoclicker for... reasons.

## Materials
- A Raspberry Pi Pico (any will work, as long as it has the bootsel button available).
- A USB cable

Yeah, that's it. I told you it was really dumb.

## Installation
- Install the [Arduino IDE](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing/) with the [arduino-pico](https://arduino-pico.readthedocs.io/en/latest/install.html) core.
- Push the bootsel button and then connect the Pi Pico to your PC (You have to do this every time you want to modify this specific code since the program turns the Pico into a HID device).
- Download the [folder](https://github.com/KaiserGabo/dumb_autoclicker/tree/main/src/autoclicker) with the program.
- Upload it.

That's it, you're done.

## How to use
- Press the bootsel button after connecting your new funny mouse.
- Enjoy clicking at 10ms intervals without destroying your actual mouse.
