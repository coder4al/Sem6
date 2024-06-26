function calculate(operation) {
  const num1 = parseFloat(prompt("Enter First Number: "));
  const num2 = parseFloat(prompt("Enter Second Number: "));

  if (isNaN(num1) || isNaN(num2)) {
    alert("Invalid Input");
  } else {
    switch (operation) {
      case "A":
        alert("Sum is " + (num1 + num2));
        break;
      case "S":
        alert("Difference is " + (num1 - num2));
        break;
      case "M":
        alert("Product is " + num1 * num2);
        break;
      case "D":
        if (num2 !== 0) {
          alert("Quotient is " + num1 / num2);
        } else {
          alert("Division by zero is not allowed");
        }
        break;
    }
  }
}
