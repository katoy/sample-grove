
# Grove LED

http://wiki.seeedstudio.com/Grove-Red_LED/
で Lチカ(LED 点灯)を 各種のボードで行ってみた。

この LED は、 3線を使う。(gnd, vcc, sig)
sig の先にはトランジスタがつながっていて、sig の値をトリガーにして LED を on/off させる。

## arduino uno

 https://www.seeedstudio.com/Base-Shield-V2.html
 を使って接続。


## M5Stack-basic

```
 LED      M5Stack basic
 gnd <--> G
 vcc <--> 5V
 nc  <--> 36
 sig <--> 26
```

## M5Stack-gray

nc とsig を入れ替えて portB で繋ぐ。
PortB は DigitalOUT/IN 用のポート。(PortA I2C 用, PortC はUART 用)


g26 に1, 0 を出力するプログラムは arduino でも uiflow  のどちらでも簡単に作成可能。


## micro:bit

https://www.switch-science.com/catalog/5434/  micro:bit用GROVEシールド v2.0
を使って試した。(p0/p14 という左から２番目の grave ポートに接続)

後述のhalocode で行っている端子をワニ口クリップで挟んで接続しても LED 点滅させるのは可能と思われる。  
(状況に応じて適切にポート指定をすること)

## halocode

halocode 側はワニ靴クリップで挟んでで接続。 

```
 LED      HaloCode
 gnd <--> GND
 vcc <--> 3.3v
 nc  <--> 
 sig <--> Pin1
```
