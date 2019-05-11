## Sample Directory Structure

Here is a sample directory structure that a real website might use:

![../../../_images/sample_directory_structure.png](https://web-development-class.readthedocs.io/en/latest/_images/sample_directory_structure.png)

- `docs` This directory contains documents about your website for other developers. It isn’t seen by the public.
- `public_html`: This directory is where you’ll point your production webserver to serve files from. (This is typically done with a [VirtualHost](http://httpd.apache.org/docs/2.4/vhosts/examples.html) in the `httpd.conf` file. When we talk about setting up a web server we’ll discuss that more.)
- `css` All your custom style sheets go here.
- `img` Images go here. It is nice to separate images that are part of the look/feel of your website vs. images that are part of the content.
- `js` All your custom JavaScript files go here.
- `resources` These can be “parts” of a web page that you’ll include from the `public_html` pages, that you don’t want users directly accessing. We’ll talk about that more in a later chapter.

## Security

In terms of security, directories and files pose two main challenges: First: Don’t put any file in the publicly accessible directories that is not OK for users to access. Do not assume a user won’t “guess” the filename or type it in directly. Second: [Directory traversal](http://en.wikipedia.org/wiki/Directory_traversal_attack) is a common attack vector for hackers. When you write code, make sure that users can’t specify their own directories. Particularly, don’t let them traverse up the directory tree. Since we haven’t done any PHP coding yet, we won’t discuss this in detail yet.

