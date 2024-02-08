# seapat sofle_v2

- changed return of encoder func to false, so global parent does not run anymore and does not double input events 
  - <https://www.reddit.com/r/ErgoMechKeyboards/comments/15ii2hz/sofle_v21_rgb_right_encoder_does_left_encoders/>
  - <https://www.reddit.com/r/olkb/comments/1ajtydg/sofle_v2_rotary_encoders_not_working/>
- uses same firmware as rev1
- the rp2040 must be mounted as a drive
- need to tap reset button twice (quickly) to enter bootloader
- `qmk flash -km seapat -e CONVERT_TO=promicro_rp2040 -e BOOTLOADER=rp2040`
- <https://github.com/qmk/qmk_firmware/blob/master/docs/flashing.md#raspberry-pi-rp2040-uf2>

## todo

- use mirokyu layout / home row mods
