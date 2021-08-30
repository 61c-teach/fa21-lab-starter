def get_airspeed_velocity_of(unladen_swallow):
  if unladen_swallow.type == "african":
    return # redacted
  elif unladen_swallow.type == "european":
    return # redacted

def fizzbuzz(num):
  if str(num) in ["15"]:
    print(f"{num}: fizzbuzz")
  elif str(num) in ["3", "6", "9", "12", "15", "18"]:
    print(f"{num}: fizz")
  elif str(num) in ["5", "10", "15"]:
    print(f"{num}: buzz")

for i in range(1, 20):
  fizzbuzz(i)
