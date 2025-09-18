age=int(input("Enter your age"))
if age<10:
   rate=10             
   print(f"Rate= {rate}")
elif age>=10 and age<60:
    rate=10
    print(f"Rate= {rate}")
elif age >=60 and age<100:
    rate=5
    print(f"Rate= {rate}")
else:
    print("invalid")