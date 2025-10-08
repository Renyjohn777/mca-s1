students={
    "Anu":[95,76,88],
    "Varun": [65, 46, 78],
    "Lito": [75, 66, 38],
}
for name,marks in students.items():
    total=sum(marks)
    average=sum(marks)/len(marks)
    print(f"Student {name}")
    print(f" marks: {marks}")
    print(f"Total marks: {total}")
    print(f"Average marks: {average}")
    print("." *20)