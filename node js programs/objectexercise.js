//  write the code for product using object.
const product = {
    itemName: 'iphone14',
    price: 5000,
    discount: 15,
    itemcode: "p32",
}
console.log(product) // access karne k liye

// Factoryfuction
function createProduct(itemName, price, discount, itemcode) {
    return {
        itemName: itemName,
        price: price,
        discount: discount,
        itemcode: itemcode,
    }
}
const football = createProduct('football', 400, 10, 'p40')

// Constructor Fuction
fuction product(ItemName, price, discount, itemcode) {
    this.itemName: 'iphone14',
        this.price: 5000,
        this.discount: 15,
        this.itemcode: 'p32',

        this.discountvalue = fuction() {
            return price * discount / 100;
        }
}

const mobile = new product('iphone14', 50000, 10, 'f40')