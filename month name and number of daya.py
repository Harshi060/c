month=int (input("enter month number"))
months=[
  ("January", 31),
  ("February", 28),
  ("March", 31),
  ("April", 30),
  ("May", 31),
  ("June", 30),
  ("July", 31),
  ("August", 31),
  ("September", 30),
  ("October", 31),
  ("November", 30),
  ("December", 31),
]
if 1<=month<=12:
  name,days=months[month-1]
  print(name)
  print(days)
else:
  print("invalid")
