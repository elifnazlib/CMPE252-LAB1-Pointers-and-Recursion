# CMPE 252 C Programming

## Lab 1

### Part 1

Write a recursive function **int takePow(int num, int d, int result)** that finds power of given numbers.

Your task in this part is to fill in the missing function definition in skeleton code **lab1part1.c**. The remaining part of the code (such as main function) will stay as it is.

<br>

**Here are example runs of the program:**

![image](https://github.com/user-attachments/assets/6cc91d59-c6d4-4153-b994-7ba8be896f10)

![image](https://github.com/user-attachments/assets/687cf559-599c-4f77-bbb1-e782cead6806)

![image](https://github.com/user-attachments/assets/6de3bb4f-fe25-45b7-9425-e796a4e49bf5)

<br>

### Part 2

In this part, you are going to implement the following function in skeleton code **lab1part2.c**:

**void isInCircle(int \*result, double \*centerX, double \*centerY);**

<br>

This function is supposed to do the following tasks:

- Read x and y coordinate and radius of the given circle using scanf function, respectively.

- Read x and y coordinate of the points until EOF using scanf function.

- Calculate center coordinate of given points (for this step, do not use circle point).

- After calculating centerX and centerY, you should check that this center is inside, on or outside of circle using following formula:

    - Let distance = (CenterPointsX – centerCircleX)<sup>2</sup> + (CenterPointsY – centerCircleY)<sup>2</sup>

    - If it is inside, distance < radius<sup>2</sup>, you should set result to 1.
  
    - If it is on the circle, distance = radius<sup>2</sup>, you should set result to 0.
  
    - Otherwise, distance > radius<sup>2</sup>, you should set result to -1.
  
    - You should also set centerX and centerY parameters of function.

<br>

Your task in this part is to fill in the missing function definition in skeleton code **lab1part2.c**. The remaining part of the code (such as main function) will stay as it is.

<br>

**Here are the example runs of the programs:**

![image](https://github.com/user-attachments/assets/2e124e97-12c5-4897-9913-906f8c7320a2)

![image](https://github.com/user-attachments/assets/eae6b0e7-c729-4d5a-b572-0454e394e6e7)

![image](https://github.com/user-attachments/assets/3b9774e6-14cf-4983-9ba7-892a5f01d40d)




