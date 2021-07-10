# A vending machine controller: BASIC REQUIREMENTS


+ Input:

  (1) Coin: 10,50,100, but other coins can be possible.

  (2) Selection of items~ beverages, coffees, anything is possible.


+ Output:

  (1) List of the items with selectable number

  (2) When you select the items, a short introduction can be displayed

  (3) The current sum of the inserted coins

  (4) When you select an item, out the item from a list of items.



+ Functions:

  (1) It gets coins and sells the items.

  (2) It is possible to sell the items until the coin balance is greater than the price of the lowest-priced item. 

     As a matter of course, the customer can cancel the transaction and get the rest of the coins back.

  (3) Every time when it sells the items, it sends a state of current storage to its owner.

  (4) If the number of items in the item list is less than a certain value, it sends order to get additional items from the management center.
  (5) If the center sends the additional items, it will add the items to the item list.



+ Select items you favor and complete the requirements with your additional functionality.


## My vending machine controller

`class diagram`

<img width="390" alt="OOP과제1 (1)" src="https://user-images.githubusercontent.com/87002218/125167295-c63def80-e1da-11eb-94a2-aa9dea30dd69.PNG">

`activity diagram`

<img width="309" alt="OOP과제1 (2)" src="https://user-images.githubusercontent.com/87002218/125167379-2339a580-e1db-11eb-8906-d0211fb06c6e.PNG">

`sequence diagram`

<img width="307" alt="OOP과제1 (3)" src="https://user-images.githubusercontent.com/87002218/125167391-32b8ee80-e1db-11eb-9814-b7a0b97aeb5c.PNG">
