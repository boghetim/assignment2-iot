# Assignment-2IOT

Inhoud van opdracht

This assignment will be a bit more challenging than the last. Even though the first part is basically something, you've already done. But we're actually going to use this pipeline for something more useful now. 😉 See the points below of what I expect from you.


<Make a GitHub Action (GA) that does the following>
* Build a project from source
* Packages that project into a Docker container
* Pushes that container into the GitHub container registry

<Make a Terraform main.tf that does the following (include main.tf in the git repo)>
* Connects to your local Docker daemon
* Pulls the image built from the GA in step 1
* Provisioning of the infrastructure on your local machine

<Bonus points>
* Automatically format the Terraform code with GA
* Tried out Nix to build the image
* The GA creates a PR if the Terraform code isn't formatted correctly
* The GA is capable of creating releases through git tags
* You tried to use Terraform's remote state
* ...


For the blog post, please post either a link in your submission to where I can find it. Or upload a file. The blog post has to contain the following.

An explanation of what you believe Infrastructure as Code is
Your own reasoning of why you think Infrastructure as Code is useful, or isn't
How Terraform plays a role in all the above
(Bonus) why you think Nix is awesome 😉


Note, the blog post isn't meant to be a paper, but also not a one-liner. I have made an exception for the previous assignment's blogs posts. I will not forgive low effort blog posts this time. If you are unsure if your blog post is OK, please email me asking for a review.



Good luck! 🤞
