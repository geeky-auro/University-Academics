var num1=7;
var num2=6;
console.log(num1+num2);

var ans=num1>num2;
console.log(ans);

// D=(L-S)/L * 100;
// a+((b*c)/d)*e;

var sellingprice=199;
var listPrice=799;
var discountPercent=(listPrice-sellingprice)/listPrice*100;
console.log("Discount Percentage is :"+discountPercent);

displayDiscountPercentage=Math.round(discountPercent);
console.log(displayDiscountPercentage+ " % off");