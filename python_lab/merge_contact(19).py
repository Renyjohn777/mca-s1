contacts1={
    "Anu": "9989776567",
     "Tom": "9989772212"
}
contacts2={
    "Mathew": "7789776567",
     "John": "7989772212"
}
print("contacts 1:",contacts1)
print("contacts 2:",contacts2)
merged_contacts=contacts1.copy()
merged_contacts.update(contacts2)
print("merged contacts:",merged_contacts)
