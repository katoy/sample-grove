#
# Connect
#   obniz <--> Grove LED
#       0 <--> VCC
#       1 <--> GND
#       2 <--> SIG
#
# Edit code with:
#   https://repl.it/languages/python3
#   replace 'OBNIZ_ID_HERE' -> 実際の oznzid
#

import asyncio
from obniz import Obniz

async def onconnect(obniz):
  obniz.display.clear()
  obniz.display.print("Hello, World!")
  obniz.io0.output(True)
  obniz.io1.output(False)

  val = True
  while True:
    obniz.display.clear()
    message = "LED: {}".format(str(val))
    obniz.display.print(message)
    obniz.io2.output(val)
    await asyncio.sleep(1)
    val = not val

obniz = Obniz('')
obniz.onconnect = onconnect
asyncio.get_event_loop().run_forever()
