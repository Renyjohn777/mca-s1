import calendar
year=int(input("Enter the year:"))
leap_year=calendar.isleap(year)
if leap_year:
    print("The given year is leap Year")
else:
    print("The give year is not leap year")
