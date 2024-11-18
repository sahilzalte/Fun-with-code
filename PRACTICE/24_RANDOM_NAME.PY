import random

def generate_random_name():
    male_names = ["John", "Michael", "David", "Chris", "James"]
    female_names = ["Emily", "Sophia", "Olivia", "Emma", "Ava"]

    gender = input("Enter gender (male/female): ").strip().lower()
    
    if gender == "male":
        name = random.choice(male_names)
        print(f"Random Male Name: {name}")
    elif gender == "female":
        name = random.choice(female_names)
        print(f"Random Female Name: {name}")
    else:
        print("Invalid gender. Please enter 'male' or 'female'.")

generate_random_name()
