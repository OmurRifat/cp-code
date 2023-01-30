function rotateLeft(a, itr) {
    //for checking the input
    console.log("Before Rotating: ", a)
    let updatedArray = [...a];
    for (let i = 0; i < itr; i++) {
        for (let j = 0; j < a.length; j++) {
            if (j === (a.length - 1))
                a[j] = updatedArray[0];
            else
                a[j] = a[j + 1]
        }
        updatedArray = [...a];
    }
    //for checking the output
    console.log("After Rotating: ", a)
}

rotateLeft([1, 2, 3, 4, 5], 4)