# Exercise 1: A program that asks the user for his annual rent and displays the corresponding tax.

```c++
    //Request for rent
    cout << "What is your annual rent? ";
    cin >> renta;

    //Comparison of rent with conditions
    if (renta<10000)
    { 
        declarar(renta, 5, .05);
    }
    else if (renta>=10000 & renta <20000)
    {
        declarar(renta, 15, .15);
    }
    else if (renta>=20000 & renta <35000)
    {

        declarar(renta, 20, .20);
    }
    else if (renta>=35000 & renta <60000)
    {
        declarar(renta, 30, .30);
    }
    else if (renta>=60000)
    {
        declarar(renta, 45, .45);
    }

    //Function with the visualization with the amount of tax to pay
    void declarar(float cantidad, float porcentaje, float rentaInteres){
    
        float interes;
    
        interes = cantidad*rentaInteres;
        rentaInteres = (interes/cantidad)*100;
        cout<< "Your tax is "<< rentaInteres << "%" <<endl;
        cout << "Tax to pay " << interes;
    }

```
## Explanation of the exercise 1
1. Ask the user for his annual rent.
2. If the anual rent is less than $10,000 it's 5%
3. If the anual rent is between $10,000 and $20,000 it's 15%
4. If the anual rent is between $20,000 and $35,000 it's 20%
5. If the anual rent is between $35,000 and $60,000 it's 30 %
6. If the anual rent is more than $60,000 it's 45%
7. Print the porcent of tax and the tax to pay.

## Test

### A) Less than $10,000
<img src="images/e1.1.PNG" align="center" height="150" width="700"/>

### B) Between $10,000 and $20,000
<img src="images/e1.2.PNG" align="center" height="150" width="700"/>

### B) Between $20,000 and $35,000
<img src="images/e1.3.PNG" align="center" height="150" width="700"/>

### B) More than $60,000
<img src="images/e1.4.PNG" align="center" height="150" width="700"/>

# Exercise 2: A program that asks the user for his score and displays the corresponding type of benefit and money

```c++
    //Ask the puntuation of the user
    cout << "What is your puntuation? " << endl;
    cin >> puntuacion;

    //Evaluate the score to assign the level and money.
    if((puntuacion==0.0)||(puntuacion==0.4)||(puntuacion>=0.6)){
        dinero = puntuacion*2400;
        if(puntuacion==0.0)
        {
            cout << "Your level of performance is unacceptable" << endl;
        
        }else if (puntuacion==0.4)
        {
            cout << "Your level of performance is acceptable" << endl;
        }else if (puntuacion>=0.6)
        {
            cout << "Your level of performance is meritorious" << endl;
        }
        cout << "The money you will get is $" << dinero << endl;
        
    }else{
        cout << "The performance you enter is invalid";
    }

```

## Explanation of the exercise 2
1. Ask the puntuation of the user.
2. Check that the user entered a score more than or equal to 0.6 or equal to 0.4 or equal to 0.0
3. If the user does not enter a valid score print Your score is unacceptable message.
4. Multiply the score by 2400 and get the cash value.
5. Check what kind of score you got depending on your performance
6. Print the amount of money.

## Test

### A) Puntuation 0.0
<img src="images/e2.1.PNG" align="center" height="150" width="700"/>

### B) Puntuation 0.4
<img src="images/e2.2.PNG" align="center" height="150" width="700"/>

### C) Puntuation 0.6
<img src="images/e2.3.PNG" align="center" height="150" width="700"/>

# Exercise 3: A program that asks for your age and print the cost of ticked.

```c++
    // Enter your age 
    cout << "How old are you? " << endl;
    cin >> edad;

    //Asignate the cost of your ticked
    if (edad>=0 && edad<4)
    {
        cout << "You can enter for free" << endl;
    }
    else if (edad>=4 && edad<=18)
    {
        cout << "You can enter for $5 bucks" << endl;
    }
    else if (edad>18)
    {
        cout << "You can enter for $10 bucks" << endl;
    }
    else
    {
        cout << "Your age is invalid \n";
    }

    // Print the cost of the ticked.
    cout << "The cost of your ticked is $" << precio << endl;
```
## Explanation of the exercise 3
1. Ask the age of the user.
2. If the age is between 4 and 0, the ticket price is 0 bucks.  
3. If the age is more than 4 and less than 18, the ticket price is 5 bucks.  
3. If the age is more than 18, the ticket price is 10 bucks.
3. If the age lower than 0, you will see a message "Your age is invalid".  
7. Print the ticket cost. 

## Test

### A) Below 4
<img src="images/e3.1.PNG" align="center" height="150" width="700"/>

### B) More than 4 and less than 18
<img src="images/e3.2.PNG" align="center" height="150" width="700"/>

### C) More than 18
<img src="images/e3.3.PNG" align="center" height="150" width="700"/>

### D) Invalid age
<img src="images/e3.4.PNG" align="center" height="150" width="700"/>

# Exercise 4: Menu of a restaurant called Bella Napoli Pizzeria showing your type of pizza and the ingredients it has

```c++

    //Menu of the Bella Napoli
    cout << "Menu\n" << endl;
    cout << "1. Vegetarian Pizza" << endl;
    cout << "2. Classic Pizza" << endl; 

    //Ask the pizza user want
    cout << "What pizza do you want? ";
    cin >>pizza;

    //Ingredients of vegetarian pizza
    if (pizza==1)
    {
        cout << "Ingredients\n"<< endl;
        cout << "1. Pepper" << endl;
        cout << "2. Tofu" << endl;
        cout << "3. Exit\n" << endl;

        cout << "Enter the ingredient do you want? ";
        cin >> opcion;
        if (opcion==1)
        {
            cout << "Your pizza is vegetarian with tofu and tomatoe sauce";
        }
        else if (opcion==2)
        {
            cout << "Your pizza is vegetarian with tofu and tomatoe sauce";
        }
        else if (opcion==3)
        {
            system("PAUSE");
        }
        else{
            cout << "Your ingredient is invalid";
        }
        
    }

    //Ingredients of vegetarian pizza
    else if (pizza==2)
    {
        cout << "Ingredients\n"<< endl;
        cout << "1. Peperoni" << endl;
        cout << "2. Jam" << endl;
        cout << "3. Salmon" << endl;
        cout << "4. Exit\n" << endl;

        cout << "Enter the ingredient do you want"<< endl;
        cin >> opcion;
        if (opcion==1)
        {
            cout << "Your pizza is classic with peperoni, mozzarella and tomatoe sauce";
        }
        else if (opcion==2)
        {
            cout << "Your pizza is classic with jam, mozzarella and tomatoe sauce";
        }
        else if (opcion==3)
        {
            cout << "Your pizza is classic with salmon, mozzarella and tomatoe sauce";
        }
        else if (opcion==4)
        {
            system("PAUSE");
        }
        else{
            cout << "Your ingredient is invalid";
        }

    }
    //Invalid pizza
    else{
        cout << "Your pizza is invalid";
    }

```

## Explanation of the exercise 4
1. Ask the user what type of pizza user prefers. 
2. Display the menu depending on your type of pizza.
3. If he selects 1 he enters the vegetarian ingredients menu.  
4. If he selects 2 he enters the no vegetarian ingredients menu. 
5. If any number but 1 or 2 is selected it prints "Your pizza is invalid".   
3. Ask what ingredients you want on your pizza.
4. Print the type of your pizza and the ingredients it has.

## Test

### A) Vegetarian pepper
<img src="images/e4.1.PNG" align="center" height="150" width="700"/>

### B) Vegetarian tofu
<img src="images/e4.2.PNG" align="center" height="150" width="700"/>

### C) Pizza pepperoni
<img src="images/e4.3.PNG" align="center" height="150" width="700"/>

### D) Pizza salmon
<img src="images/e4.4.PNG" align="center" height="150" width="700"/>