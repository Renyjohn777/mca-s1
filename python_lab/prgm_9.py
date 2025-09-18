pay=float(input("Enter the basic pay of the employee:"))
h=0.10*pay
t=0.05*pay
total_salary=pay+h+t
print("Salary details")
print(f"Basic pay:{pay:.2f}")
print(f"Hra(10%) :{h:.2f}")
print(f"TA(5%) :{t:.2f}")
print(f"Total Salary :{total_salary:.2f}")