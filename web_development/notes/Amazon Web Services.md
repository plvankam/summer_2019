# Amazon Web Services

This chapter covers how to get a public web server up and running using Amazon Web Services (AWS).

## 6.3.1. Create a Server Instance

<iframe src="https://www.youtube.com/embed/pqiDL0lxU0s" allowfullscreen="" width="560" height="315" frameborder="0"></iframe>

If you are being provide a server instance by your instructor, skip to the [Setting Up The Server](https://web-development-class.readthedocs.io/en/latest/semester_1/06_server_management/03_aws/aws.html#setting-up-the-server) section.

Sign up for a Amazon Web Services account, and access the AWS console at:

<https://console.aws.amazon.com>

Select EC2:

![../../../_images/select_ec2.png](https://web-development-class.readthedocs.io/en/latest/_images/select_ec2.png)

Launch a new instance.

Attention

If you are restarting this tutorial, you probably want to shut down any other instances you are running. If you run more than one instance you will get charged money from Amazon.

![../../../_images/launch_instance_1.png](https://web-development-class.readthedocs.io/en/latest/_images/launch_instance_1.png)

We are going to create our own server. But the server will not be running Microsoft Windows or MacOS. We are going to use a version of the Linux Operating System called Ubuntu.

Ubuntu is free. You can run it without a graphical user interface, which is great for a small cheap server. And it isn’t hard to administer remotely.

Select Ubuntu:

![../../../_images/select_ubuntu.png](https://web-development-class.readthedocs.io/en/latest/_images/select_ubuntu.png)

Use a small, free machine:

![../../../_images/select_free_tier.png](https://web-development-class.readthedocs.io/en/latest/_images/select_free_tier.png)

The instance details defaults are ok, so click “Review and Launch”:

![../../../_images/instance_details.png](https://web-development-class.readthedocs.io/en/latest/_images/instance_details.png)

We need security. Hit “Edit Security Groups”:

![../../../_images/edit_security_groups.png](https://web-development-class.readthedocs.io/en/latest/_images/edit_security_groups.png)

Computers use numbered “ports” to sort web traffic. That way they can keep web traffic separate from e-mail, file sharing, etc.

We want everyone to connect to our web server to get web pages. “HTTP” controls normal un-encrypted web page requests. It runs on port 80.

HTTPS controls encrypted web traffic. It runs on port 443.

SSH allows us to “shell” over to the machine and type in commands. That runs on port 22.

For proper security, we want anyone to connect to our server via HTTP and HTTPS. We only want our own computer to connect via SSH, because that’s what we use to administrate our accounts.

Set up the security groups as shown. Your “My IP” will fill in automatically with your IP address when the drop-down box is selected. You’ll need to add a SSH row for each computer IP you want to shell in from.

(If you’ve been through this step before, you can “Select an existing security group” and not do this again.)

![../../../_images/setup_security.png](https://web-development-class.readthedocs.io/en/latest/_images/setup_security.png)

Hit “Launch” again:

![../../../_images/launch_instance_2.png](https://web-development-class.readthedocs.io/en/latest/_images/launch_instance_2.png)

Still isn’t launching. We need a private/public key pair. We’ll use this instead of a password. It is more secure. Name your key pair. Download it. Save it somewhere safe. You can’t download it again, so if you lose that file you lose access to your servers. You can use the same key/pair for many servers if you want.

Attention

Do not save your PEM key into the HTML folder or allow it to be checked into version control.

Seriously. Make sure you didn’t save this in the same folder as all your web stuff. Do not risk it being checked into version control. Go make sure. I’ll wait.

Did you make sure?

Danger

**Really, DO NOT ALLOW THIS FILE INTO VERSION CONTROL.**

If you do this, you are giving everyone access to all your stuff. Also, version control keeps old versions. Deleting it won’t remove the file. And once it hits GitHub every evil person will have it. Seriously. People have programs that scan all of GitHub for people that check in keys. If you ever check in a key, you’ll need to recreate your key and assume everything accessible by that key has been compromised.

*Do* save the key somewhere safe. On a flash drive or network drive. If you lose the key file, you can’t access your machine and you’ll have to start over.

![../../../_images/download_keypair.png](https://web-development-class.readthedocs.io/en/latest/_images/download_keypair.png)

Now will it launch? Because this will be the third time we’ve hit “Launch.”

![../../../_images/launch_instance_3.png](https://web-development-class.readthedocs.io/en/latest/_images/launch_instance_3.png)

Yay! We’ve launched our server. Click the link shown (you’ll have a different id) to see your server’s status.

![../../../_images/view_instance.png](https://web-development-class.readthedocs.io/en/latest/_images/view_instance.png)

The server is starting up. if you look under “Status Checks” column, you’ll see it start with “Initializing” and eventually say something like “2/2 checks passed.”

## 6.3.2. Setting Up The Server

### 6.3.2.1. Getting to the Server

We are going to open a “shell” to our new Amazon server using an encrypted network protocol called “ssh”. (Short for Secure Socket Shell.)

You will see people talk about typing in commands to a “command prompt”, “terminal window”, “terminal”, “shell”, “ssh”, “bash”, and “telnet”. There are some slight differences in the meanings of these words, but for our purposes they all mean we are typing in commands to a computer.

#### 6.3.2.1.1. Get The Server Address

Copy the Public DNS address we get from Amazon, or that you got from your instructor if he set up the server for you.

![../../../_images/copy_address.png](https://web-development-class.readthedocs.io/en/latest/_images/copy_address.png)

Use that address and the key to get a command shell on the new server.

#### 6.3.2.1.2. Connecting With a Mac

To use the Terminal on the Mac, search for and run the “Terminal” program. Copy your key to the Mac’s desktop. What you will type will look *kind* of like:

```bash
cd Desktop
ssh -i my_key.pem ubuntu@myservername.com
```

Replace my_key.pem with the file name of the key that you downloaded from Amazon.

Replace myservername.com with the really long public DNS name of the server you copied from the Amazon console.

You may get a question about the “authenticity” of the host. If so, just type “yes”. You’ll only get that question once.

If you get an error about permissions, you might need to make the key so that only you can read it on the Mac. The command for this is:

```bash
chmod 400 my_key.pem
```