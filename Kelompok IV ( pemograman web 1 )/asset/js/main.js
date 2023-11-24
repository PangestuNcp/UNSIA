// Memunculkan toggle menu saat layar kecil
$(document).ready(function () {
  $("#check").click(function () {
    $("ul").toggleClass("show");
  });
});

// Nav ganti warna saat di scroll
$(window).scroll(function () {
  $("nav").toggleClass("scrolled", $(this).scrollTop() > 550);
});

$(".client").owlCarousel({
  loop: true,
  margin: 10,
  nav: true,
  responsive: {
    0: {
      items: 1,
    },
  },
});

function caru(arr, angka) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] == angka) {
      return i;
    }

    return -1;
  }
}

// Driver code

let arr = [2, 3, 4, 10, 40];
let x = 10;

// Function call
let result = search(arr, n, x);
result == -1
  ? console.log("Element is not present in array")
  : console.log("Element is present at index " + result);
