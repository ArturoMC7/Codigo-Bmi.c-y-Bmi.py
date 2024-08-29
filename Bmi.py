# Here is the implementation of the code Bmi.c in Python
# Function to calculate BMI
def calc_bmi(height, weight):
    bmi = weight / ((height / 100.0) * (height / 100.0)) 
    return bmi


def main():
    # Local variable declaration
    bmi = 0
    np = 0

    # Ask the user for the number of people
    np = int(input("Enter the number of people: "))

    bmindex = [0.0] * np
    height = [0.0] * np
    weight = [0.0] * np

    underweight = 0
    normal = 0
    overweight = 0
    obese = 0

    for i in range(np):
        # Ask user for height in centimeters
        height[i] = float(input(f"Enter the height of person {i + 1} (in cm): "))

        # Ask user for weight in kilograms
        weight[i] = float(input(f"Enter the weight of person {i + 1} (in kg): "))

        # Call calc_bmi function
        bmi = calc_bmi(height[i], weight[i])
        bmindex[i] = bmi
        
        # Print result
        print(f"The body mass index of person #{i + 1} is {bmi:.2f} kg/m^2")

        # Compare the index with the BMI
        if bmi < 18.5:
            print(f"The person #{i + 1} is underweight.")
            underweight += 1
        elif bmi < 24.9:
            print(f"The person #{i + 1} is into their normal weight ")
            normal += 1
        elif bmi < 29.9:
            print(f"The person #{i + 1} is overweight.")
            overweight += 1
        else:
            print(f"The person #{i + 1} is obese.")
            obese += 1

    # Print the results
    underp = (underweight / np) * 100
    normalp = (normal / np) * 100
    overp = (overweight / np) * 100
    obesep = (obese / np) * 100

    print("\nThe results are:")
    print(f"Underweight: {underp:.2f}%")
    print(f"Normal weight: {normalp:.2f}%")
    print(f"Overweight: {overp:.2f}%")
    print(f"Obese: {obesep:.2f}%")

if __name__ == "__main__":
    main()
