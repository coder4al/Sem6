function calc(form) {
  const sal = parseFloat(form.salary.value);
  if (form.name.value == "") {
    alert("Enter the name..");
  }
  else if (sal > 0) {
    form.hra.value = (sal * 12) / 100;
    form.da.value = (sal * 6) / 100;
    form.ta.value = (sal * 5) / 100;
    form.pf.value = (sal * 3) / 100;
    form.np.value = sal + (sal * 20) / 100;
  }
  else{
    alert("Enter numeric value for salary..")
  }
}
