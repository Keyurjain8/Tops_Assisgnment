#Write a Python program to calculate the area of a trapezoid 
def trapezoid_area(b1, b2, h):
    # Calculate the area using the formula
    area = 0.5 * (b1 + b2) * h
    return area

# Example usage
base1 = float(input("Enter the length of the first base (b1): "))
base2 = float(input("Enter the length of the second base (b2): "))
height = float(input("Enter the height (h) of the trapezoid: "))

area = trapezoid_area(base1, base2, height)
print(f"The area of the trapezoid is: {area}")
