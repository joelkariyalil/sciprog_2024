# Practical 05
----

## Description

### practical5A.c

Calculate the n fibonacci terms for the n value entered.

### practical5B.c
The program compares the hyperbolic arctangent (\( \text{arctanh}(x) \)) computed via the Maclaurin series to its logarithmic formula for \( x \in [-0.9, 0.9] \) with a precision threshold \(\delta\).



----
## Output

### practical5A.c

[sp86@sciprog practical05]$ gcc -o Output.exe practical5A.c -lm; ./Output.exe

Enter the value of n: 10
0 1 1 2 3 5 8 13 21 34 

[sp86@sciprog practical05]$ 

### practical5B.c

x = 0.30: 
 Maclaurin approximation = 0.3000000000 
 Logarithmic calculation = 0.3095196042

x = 0.31: 
 Maclaurin approximation = 0.3100000000 
 Logarithmic calculation = 0.3205454093

x = 0.32: 
 Maclaurin approximation = 0.3200000000 
 Logarithmic calculation = 0.3316471087

x = 0.33: 
 Maclaurin approximation = 0.3300000000 
 Logarithmic calculation = 0.3428282544

x = 0.34: 
 Maclaurin approximation = 0.3400000000 
 Logarithmic calculation = 0.3540925290

x = 0.35: 
 Maclaurin approximation = 0.3500000000 
 Logarithmic calculation = 0.3654437543

x = 0.36: 
 Maclaurin approximation = 0.3600000000 
 Logarithmic calculation = 0.3768859012

x = 0.37: 
 Maclaurin approximation = 0.3700000000 
 Logarithmic calculation = 0.3884230997

x = 0.38: 
 Maclaurin approximation = 0.3800000000 
 Logarithmic calculation = 0.4000596501

x = 0.39: 
 Maclaurin approximation = 0.3900000000 
 Logarithmic calculation = 0.4118000345

x = 0.40: 
 Maclaurin approximation = 0.4000000000 
 Logarithmic calculation = 0.4236489302

x = 0.41: 
 Maclaurin approximation = 0.4100000000 
 Logarithmic calculation = 0.4356112232

x = 0.42: 
 Maclaurin approximation = 0.4200000000 
 Logarithmic calculation = 0.4476920235

x = 0.43: 
 Maclaurin approximation = 0.4300000000 
 Logarithmic calculation = 0.4598966812

x = 0.44: 
 Maclaurin approximation = 0.4400000000 
 Logarithmic calculation = 0.4722308044

x = 0.45: 
 Maclaurin approximation = 0.4500000000 
 Logarithmic calculation = 0.4847002786

x = 0.46: 
 Maclaurin approximation = 0.4600000000 
 Logarithmic calculation = 0.4973112876

x = 0.47: 
 Maclaurin approximation = 0.4700000000 
 Logarithmic calculation = 0.5100703366

x = 0.48: 
 Maclaurin approximation = 0.4800000000 
 Logarithmic calculation = 0.5229842776

x = 0.49: 
 Maclaurin approximation = 0.4900000000 
 Logarithmic calculation = 0.5360603366

x = 0.50: 
 Maclaurin approximation = 0.5000000000 
 Logarithmic calculation = 0.5493061443

x = 0.51: 
 Maclaurin approximation = 0.5100000000 
 Logarithmic calculation = 0.5627297694

x = 0.52: 
 Maclaurin approximation = 0.5200000000 
 Logarithmic calculation = 0.5763397550

x = 0.53: 
 Maclaurin approximation = 0.5300000000 
 Logarithmic calculation = 0.5901451598

x = 0.54: 
 Maclaurin approximation = 0.5400000000 
 Logarithmic calculation = 0.6041556030

x = 0.55: 
 Maclaurin approximation = 0.5500000000 
 Logarithmic calculation = 0.6183813136

x = 0.56: 
 Maclaurin approximation = 0.5600000000 
 Logarithmic calculation = 0.6328331867

x = 0.57: 
 Maclaurin approximation = 0.5700000000 
 Logarithmic calculation = 0.6475228448

x = 0.58: 
 Maclaurin approximation = 0.5800000000 
 Logarithmic calculation = 0.6624627074

x = 0.59: 
 Maclaurin approximation = 0.5900000000 
 Logarithmic calculation = 0.6776660678

x = 0.60: 
 Maclaurin approximation = 0.6000000000 
 Logarithmic calculation = 0.6931471806

x = 0.61: 
 Maclaurin approximation = 0.6100000000 
 Logarithmic calculation = 0.7089213594

x = 0.62: 
 Maclaurin approximation = 0.6200000000 
 Logarithmic calculation = 0.7250050878

x = 0.63: 
 Maclaurin approximation = 0.6300000000 
 Logarithmic calculation = 0.7414161441

x = 0.64: 
 Maclaurin approximation = 0.6400000000 
 Logarithmic calculation = 0.7581737447

x = 0.65: 
 Maclaurin approximation = 0.6500000000 
 Logarithmic calculation = 0.7752987062

x = 0.66: 
 Maclaurin approximation = 0.6600000000 
 Logarithmic calculation = 0.7928136319

x = 0.67: 
 Maclaurin approximation = 0.6700000000 
 Logarithmic calculation = 0.8107431255

x = 0.68: 
 Maclaurin approximation = 0.6800000000 
 Logarithmic calculation = 0.8291140383

x = 0.69: 
 Maclaurin approximation = 0.6900000000 
 Logarithmic calculation = 0.8479557552

x = 0.70: 
 Maclaurin approximation = 0.7000000000 
 Logarithmic calculation = 0.8673005277

x = 0.71: 
 Maclaurin approximation = 0.7100000000 
 Logarithmic calculation = 0.8871838633

x = 0.72: 
 Maclaurin approximation = 0.7200000000 
 Logarithmic calculation = 0.9076449833

x = 0.73: 
 Maclaurin approximation = 0.7300000000 
 Logarithmic calculation = 0.9287273642

x = 0.74: 
 Maclaurin approximation = 0.7400000000 
 Logarithmic calculation = 0.9504793806

x = 0.75: 
 Maclaurin approximation = 0.7500000000 
 Logarithmic calculation = 0.9729550745

x = 0.76: 
 Maclaurin approximation = 0.7600000000 
 Logarithmic calculation = 0.9962150823

x = 0.77: 
 Maclaurin approximation = 0.7700000000 
 Logarithmic calculation = 1.0203277583

x = 0.78: 
 Maclaurin approximation = 0.7800000000 
 Logarithmic calculation = 1.0453705485

x = 0.79: 
 Maclaurin approximation = 0.7900000000 
 Logarithmic calculation = 1.0714316841

x = 0.80: 
 Maclaurin approximation = 0.8000000000 
 Logarithmic calculation = 1.0986122887

x = 0.81: 
 Maclaurin approximation = 0.8100000000 
 Logarithmic calculation = 1.1270290260

x = 0.82: 
 Maclaurin approximation = 0.8200000000 
 Logarithmic calculation = 1.1568174646

x = 0.83: 
 Maclaurin approximation = 0.8300000000 
 Logarithmic calculation = 1.1881364044

x = 0.84: 
 Maclaurin approximation = 0.8400000000 
 Logarithmic calculation = 1.2211735177

x = 0.85: 
 Maclaurin approximation = 0.8500000000 
 Logarithmic calculation = 1.2561528120

x = 0.86: 
 Maclaurin approximation = 0.8600000000 
 Logarithmic calculation = 1.2933446720

x = 0.87: 
 Maclaurin approximation = 0.8700000000 
 Logarithmic calculation = 1.3330796297

x = 0.88: 
 Maclaurin approximation = 0.8800000000 
 Logarithmic calculation = 1.3757676565

x = 0.89: 
 Maclaurin approximation = 0.8900000000 
 Logarithmic calculation = 1.4219258711

[sp86@sciprog practical05]$ 