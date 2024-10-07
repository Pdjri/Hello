[2:42 pm, 16/09/2024] Vansh Sharma CU: <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="color.css">
    <title>Color Changer</title>
    <style>
        .container{
    width:80%;
    height: 200px;
    border:2px solid rgb(26, 26, 26);

}
    </style>
</head>
<body>
    <div>
       RED: <input onchange="redValueChange()" type="range" id="redRange" min="0" max="255" step="1" value="0"><br>
       GREEN: <input onchange="greenValueChange()" type="range" id="greenRange" min="0" max="255" step="1" value="0"><br>
       BLUE: <input onchange="blueValueChange()" type="range" id="blueRange" min="0" max="255" step="1" value="0">
    </div>
    <div class="container" ></div>

   …
[3:00 pm, 16/09/2024] Vansh Sharma CU: <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Color Changer</title>
    <style>
        .container {
            width: 80%;
            height: 200px;
            border: 2px solid rgb(26, 26, 26);
            margin-top: 10px;
        }
        .rgb-display {
            margin-top: 10px;
            font-family: Arial, sans-serif;
        }
    </style>
</head>
<body>
    <div>
        RED: <input onchange="redValueChange()" type="range" id="redRange" min="0" max="255" step="1" value="0"><br>
        GREEN: <input onchange="greenValueChange()" type="range" id="greenRange" min="0" max="255" step="1" value="0"><br>
        BLUE: <input onchange="blueValueChange()" type="range" id="blueRange" min="0" max="255" step="1" value="0">
     </div>
     <div class="container" ></div>
    <div class="rgb-display">RGB: <span id="rgbDisplay">rgb(0, 0, 0)</span></div>


    <script>
        const redRange = document.querySelector("#redRange");
        const greenRange = document.querySelector("#greenRange");
        const blueRange = document.querySelector("#blueRange");
        const div = document.querySelector('.container');
        const rgbDisplay = document.querySelector('#rgbDisplay');

        const colorObject = {
            red: 0,
            green: 0,
            blue: 0
        };
        function redValueChange(){
            colorObject.red = redRange.value;
            colorChanger();
        }

        function greenValueChange(){
            colorObject.green = greenRange.value;
            colorChanger();
        }

        function blueValueChange(){
            colorObject.blue = blueRange.value;
            colorChanger();
        }

        function colorChanger(){
            const { red, green, blue } = colorObject;
            const rgbString = rgb(${red}, ${green}, ${blue});
            div.style.backgroundColor = rgb(${colorObject.red}, ${colorObject.green}, ${colorObject.blue});
            rgbDisplay.textContent = rgbString;
        }
        
        redRange.addEventListener('input', () => updateColorComponent('red', redRange.value));
        greenRange.addEventListener('input', () => updateColorComponent('green', greenRange.value));
        blueRange.addEventListener('input', () => updateColorComponent('blue', blueRange.value));
    </script>
</body>
</html>