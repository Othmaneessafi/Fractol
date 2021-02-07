# Fractol

Fractol is a graphic project that render amazing Fractals. Developed for my learning course at 1337 school.
Several options are available :

* Zoom and unzoom
* Change the number of iterations
* Move the current fractal
* Rotate by step of 90°
* Edit the display gradient
* Navigate between the three fractals
* Edit the shape of the fractal with the position of the mouse (only available with the fractal Julia)

## Install & launch
```bash
git clone https://github.com/Othmaneessafi/Fractol ~/Fractol
cd ~/Fractol && ./fractol 1 ([fractal number])
```
You have to launch the program with a parameter. This is the number of the fractal you would like to open at the execution of the program.

Example :

Open the Mandelbrot fractal ⇣
```bash
./fractol 1
```

# Mandelbrot:
<img width="1202" alt="Screen Shot 2021-02-07 at 3 45 19 PM" src="https://user-images.githubusercontent.com/44867969/107150240-2fd07e00-695d-11eb-86f6-f96119dee311.png">

# Julia:
<img width="1202" alt="Screen Shot 2021-02-07 at 3 44 25 PM" src="https://user-images.githubusercontent.com/44867969/107150250-36f78c00-695d-11eb-97d0-98dcc35bf22c.png">

# Tricorn:
<img width="1202" alt="Screen Shot 2021-02-07 at 3 45 34 PM" src="https://user-images.githubusercontent.com/44867969/107150276-50003d00-695d-11eb-9c15-1fb68aee8d83.png">

# Heart mandelbrot
<img width="1202" alt="Screen Shot 2021-02-07 at 3 46 09 PM" src="https://user-images.githubusercontent.com/44867969/107150297-6a3a1b00-695d-11eb-8c62-c50209cb1c3a.png">

# Multibrot
<img width="1200" alt="Screen Shot 2021-02-07 at 3 46 31 PM" src="https://user-images.githubusercontent.com/44867969/107150303-71612900-695d-11eb-93f5-96ae89562c26.png">



## Keyboard shortcuts

<table width="100%">
<thead>
<tr>
<td width="65%" height="60px" align="center" cellpadding="0">
<strong>Description</strong>
</td>
<td width="10%" align="center" cellpadding="0">
<span style="width:70px">&nbsp;</span><strong>Key(s)</strong><span style="width:50px">&nbsp;</span>
</td>
</tr>
</thead>
<tbody>
<tr>
<td valign="top" height="30px">Close the program (aka quit/exit)</td>
<td valign="top" align="center"><kbd>&nbsp;esc&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Reset all the changes made for this map</td>
<td valign="top" align="center"><kbd>&nbsp;clear&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Change the display gradient (aka change color)</td>
<td valign="top" align="center"><kbd>&nbsp;shift&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Enable or disable the mouse controls</td>
<td valign="top" align="center"><kbd>&nbsp;M&nbsp;</kbd> or <kbd>&nbsp;S&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Increase the global size of the fractal (aka zoom)</td>
<td valign="top" align="center"><kbd>&nbsp;+&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Decrease the global size of the fractal (aka unzoom)</td>
<td valign="top" align="center"><kbd>&nbsp;-&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Move the fractal to the up (aka move up)</td>
<td valign="top" align="center"><kbd>&nbsp;▲&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Move the fractal to the down (aka move down)</td>
<td valign="top" align="center"><kbd>&nbsp;▼&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Move the fractal to the left (aka width move left)</td>
<td valign="top" align="center"><kbd>&nbsp;◄&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Move the fractal to the right (aka move right)</td>
<td valign="top" align="center"><kbd>&nbsp;►&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Increase the number of iterations</td>
<td valign="top" align="center"><kbd>&nbsp;W&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Decrease the numbre of iterations</td>
<td valign="top" align="center"><kbd>&nbsp;Q&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Clockwise rotation on the Z axe</td>
<td valign="top" align="center"><kbd>&nbsp;T&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Counter clockwise rotation on the Z axe</td>
<td valign="top" align="center"><kbd>&nbsp;R&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Display the Julia fractal</td>
<td valign="top" align="center"><kbd>&nbsp;1&nbsp;</kdb></td>
</tr>
<tr>
<td valign="top" height="30px">Display the Mandelbrot fractal</td>
<td valign="top" align="center"><kbd>&nbsp;2&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Display the Tricorn fractal</td>
<td valign="top" align="center"><kbd>&nbsp;3&nbsp;</kbd></td>
</tr>
</tbody>
</table>

## Mouse controls

<table width="100%">
<thead>
<tr>
<td width="60%" height="60px" align="center" cellpadding="0">
<strong>Description</strong>
</td>
<td width="10%" align="center" cellpadding="0">
<span style="width:70px">&nbsp;</span><strong>Control(s)</strong><span style="width:50px">&nbsp;</span>
</td>
</tr>
</thead>
<tbody>
<tr>
<td valign="top" height="30px">Increase the global size of the fractal at the position of the cursor</td>
<td valign="top" align="center"><kbd>&nbsp;left button&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Decrease the global size of the fractal at the position of the cursor</td>
<td valign="top" align="center"><kbd>&nbsp;right button&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Increase the global size of the fractal (aka zoom)</td>
<td valign="top" align="center"><kbd>&nbsp;scroll up&nbsp;</kbd></td>
</tr>
<tr>
<td valign="top" height="30px">Decrease the global size of the fractal (aka unzoom)</td>
<td valign="top" align="center"><kbd>&nbsp;scroll down&nbsp;</kbd></td>
</tr>
</tbody>
</table>

## Contact & contribute

If you want to contact me, or fix/improve Fractol, just send me a mail at **bsouchet@student.42.fr**
