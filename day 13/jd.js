let a = 10;
let b = 20;

const promise = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve(30);
    }, 2000);
});

promise.then((data) => {
    b = data;
    console.log(b); // This will log 30 after 2 seconds
});
 // This will log 20 immediately
