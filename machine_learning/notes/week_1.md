**Multiple features**

Note: [7:25 - θT\theta^TθT is a 1 by (n+1) matrix and not an (n+1) by 1 matrix]

Linear regression with multiple variables is also known as "multivariate linear regression".

We now introduce notation for equations where we can have any number of input variables.
xj(i)=value of feature j in the ith training examplex(i)=the input (features) of the ith training examplem=the number of training examplesn=the number of features

The multivariable form of the hypothesis function accommodating these multiple features is as follows:

hθ(x)=θ0+θ1x1+θ2x2+θ3x3+⋯+θnxn

In order to develop intuition about this function, we can think about θ0\theta_0θ0​ as the basic price of a house, θ1\theta_1θ1​ as the price per square meter, θ2\theta_2θ2​ as the price per floor, etc. x1x_1x1​ will be the number of square meters in the house, x2x_2x2​ the number of floors, etc.

Using the definition of matrix multiplication, our multivariable hypothesis function can be concisely represented as:

hθ(x)=θ0θ1...θnx0x1⋮xn=θTx

This is a vectorization of our hypothesis function for one training example; see the lessons on vectorization to learn more.

Remark: Note that for convenience reasons in this course we assume x0(i)=1 for (i∈1,…,m). This allows us to do matrix operations with theta and x. Hence making the two vectors 'θ\thetaθ' and x(i)x^{(i)}x(i) match each other element-wise (that is, have the same number of elements: n+1).]

So we have our hypothesis function and we have a way of measuring how  well it fits into the data. Now we need to estimate the parameters in  the hypothesis function. That's where gradient descent comes in.

Imagine that we graph our hypothesis function based on its fields θ0\theta_0θ0 and θ1\theta_1θ1  (actually we are graphing the cost function as a function of the  parameter estimates). We are not graphing x and y itself, but the  parameter range of our hypothesis function and the cost resulting from  selecting a particular set of parameters.

We put θ0\theta_0θ0 on the x axis and θ1\theta_1θ1  on the y axis, with the cost function on the vertical z axis. The  points on our graph will be the result of the cost function using our  hypothesis with those specific theta parameters. The graph below depicts  such a setup.

![img](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/bn9SyaDIEeav5QpTGIv-Pg_0d06dca3d225f3de8b5a4a7e92254153_Screenshot-2016-11-01-23.48.26.png?expiry=1560470400000&hmac=cnJPBTP7AYM2JJhLY89meU-7i1CdC3N4ZTDkjKZUvkE)

We  will know that we have succeeded when our cost function is at the very  bottom of the pits in our graph, i.e. when its value is the minimum.   The red arrows show the minimum points in the graph.

The way we do  this is by taking the derivative (the tangential line to a function) of  our cost function. The slope of the tangent is the derivative at that  point and it will give us a direction to move towards. We make steps  down the cost function in the direction with the steepest descent. The  size of each step is determined by the parameter α, which is called the  learning rate. 

For example, the distance between each 'star' in  the graph above represents a step determined by our parameter α. A  smaller α would result in a smaller step and a larger α results in a  larger step. The direction in which the step is taken is determined by  the partial derivative of J(θ0,θ1)J(\theta_0,\theta_1)J(θ0,θ1).  Depending on where one starts on the graph, one could end up at  different points. The image above shows us two different starting points  that end up in two different places. 

The gradient descent algorithm is:

repeat until convergence:

θj:=θj−α∂∂θjJ(θ0,θ1)

where

j=0,1 represents the feature index number.

At each iteration j, one should simultaneously update the parameters θ1,θ2,...,θn\theta_1, \theta_2,...,\theta_nθ1,θ2,...,θn. Updating a specific parameter prior to calculating another one on the j(th)j^{(th)}j(th) iteration would yield to a wrong implementation. 