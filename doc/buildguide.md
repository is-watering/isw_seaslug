# Build guide

## Parts
Name                     |Quantity |Notes
-------------------------|---------|-----
PCB                      |1        |[Here's the data](https://github.com/is-watering/isw_seaslug/tree/main/hardware/pcb)
Switch plate             |1        |
Bottom plate             |1        |
Cover plate              |1        |
SK6812 MINI-E leds       |10       |
1N4148W diodes           |6        |
Kailh hotswap sockets    |6        |
RP2040-Zero              |1        |

### Optionally
Name |Quantity |Notes
-----|---------|-----
20P Low profile pinsocket |2    |Used to socket the ProMicro RP2040.<br>[AKIZUKI DENSHI](https://akizukidenshi.com/catalog/g/g103138/)
EVQWGD001 rotary encoder  |1    |[Aliexpress](https://www.aliexpress.com/item/32990950196.html), [TALPKEYBOARD](https://talpkeyboard.net/items/65cdb71207d2c4002b622ce0), [Yushakobo](https://shop.yushakobo.jp/products/3971)
1N4148W diodes            |1    |Used when EVQWGD001 is installed
AZ1UBALL                  |1    |Only one of this or StickPointV can be attached.<br>[Booth](https://booth.pm/ja/items/4202085)
StickPointV               |1    |Only one of this or AZ1UBALL can be attached.<br>Also, use those without glove socket mounts.<br>[Booth](https://booth.pm/ja/items/5404009)
FSS-41035-04 4P pinsocket |1    |Used when AZ1UBALL or StickPointV is installed.<br>[HIROSUGI NET](https://www.hirosugi-net.co.jp/shop/goods/goods.aspx?goods=24081), [Yushakobo](https://shop.yushakobo.jp/products/a1600ps-01-1)
PSS-410153-04 4P pinheader |1    |Used when AZ1UBALL or StickPointV is installed.<br>[HIROSUGI NET](https://www.hirosugi-net.co.jp/shop/g/g21243/), [Yushakobo](https://shop.yushakobo.jp/products/a1600ph-01-1)


## Build PCB

### [Leds](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-sk6812mini-e.md)

### [Diodes](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-1n4148w.md)

### [Hotswap sockets](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-cpg151101s11.md)

### RP2040-Zero
It is recommended to check whether the firmware can be written to the microcontroller in advance.
* [Remap](https://remap-keys.app/catalog/uf4aIRy3BQslvcxSSvND)
* [Soure code](https://github.com/is-watering/isw_geode/tree/main/firmware)

Solder the microcontroller from the top of the PCB, face down, using surface mount soldering.  
[Learn more about how to solder microcontrollers](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/surfacemount-rp2040-zero.md)

## Build Case
in preparation

## Build Optionally
### [EVQWGD001 rotary encoder](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-evqwgd001.md)

### AZ1UBALL
in preparation

### StickPointV
in preparation