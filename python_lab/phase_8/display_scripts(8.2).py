import time
import datetime
print("Current date and time:",datetime.datetime.now())
print("current year:",datetime.date.today().strftime("%Y"))
print("Month of year:",datetime.date.today().strftime("%B"))
print(" Week no of the year:",datetime.date.today().strftime("%W"))
print("Day no of the week:",datetime.date.today().strftime("%w"))
print("Day of year:",datetime.date.today().strftime("%j"))
print("Day of month:",datetime.date.today().strftime("%d"))
print("Day of  week:",datetime.date.today().strftime("%A"))

print("\n Using time module:")
current_time=time.localtime()
print("Today's date:",time.strftime("%Y-%m-%d",current_time))