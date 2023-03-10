// Declaring a class
class product {
    constructor(itemName, price, discount, Productcode) {
        this.itemName = itemName;
        this.price = price;
        this.discount = discount;
        this.Productcode = Productcode;
    }
}

let Pencil = new product('Pencil', 10, 2, 'p30'); // object making for pencil

// class expersion
const product_1 = class product {
    constructor(itemName, price, discount, Productcode) {
        this.itemName = itemName;
        this.price = price;
        this.discount = discount;
        this.Productcode = Productcode;

        getDiscountvalue() { // Getter method
            return this.discount;
        }

        setDiscountvalue(value) { // Setter method
            return this.discount = value;

            // method Declared
            discountvalue() {
                return this.discount * this.price / 100
            }
        }
    }
};
let Chair = new product('chair', 10, 2, 'p30'); // object making for chair

// Extending classes or use of extends keyword
class product {
    constructor(itemName) {
        console.log('passed by furniture + itemname');
        this.itemName = itemName;

        getItemName() { // method declared
            return this.itemName + " is a product";
        }
    }
}

class furniture extends product {
    constructor(itemName) {
        super(itemName); // call the construct of parent class

        getItemName() { // method declared
            return this.itemName + " is a furniture";
        }
    }

    let Pencil = new product('pencil'); // object making for both class
    let Chair = new furniture('chair');

    // output dekhne k liye
    pencil.getItemName() // output = pencil is a product
    chair.getItemName() // output = chair is a product