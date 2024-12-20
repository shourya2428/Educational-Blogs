// Smooth Scroll for Navigation Links (for in-page navigation)
const navLinks = document.querySelectorAll('nav ul li a');
navLinks.forEach(link => {
    link.addEventListener('click', (event) => {
        // Prevent default behavior for links with a hash
        if (link.getAttribute('href').startsWith("#")) {
            event.preventDefault();
            const targetId = link.getAttribute('href').substring(1);
            const targetElement = document.getElementById(targetId);
            if (targetElement) {
                targetElement.scrollIntoView({ behavior: 'smooth' });
            }
        }
    });
});

// Dynamic Footer Year
function updateFooterYear() {
    const footerText = document.querySelector('footer p');
    if (footerText) {
        footerText.innerHTML = `&copy; ${new Date().getFullYear()} Educational blog. All rights reserved.`;
    }
}

// Comment Form Validation and Submission
const commentForm = document.getElementById('comment-form');
const commentsSection = document.getElementById('comments-section');

if (commentForm) {
    commentForm.addEventListener('submit', (event) => {
        event.preventDefault();

        const name = document.getElementById('name').value.trim();
        const email = document.getElementById('email').value.trim();
        const comment = document.getElementById('comment').value.trim();

        if (name && email && comment) {
            const newComment = document.createElement('div');
            newComment.classList.add('comment');
            newComment.innerHTML = <p><strong>${name}:</strong> ${comment}</p>;
            commentsSection.appendChild(newComment);

            commentForm.reset();
        } else {
            alert('Please fill in all fields before submitting your comment.');
        }
    });
}

document.addEventListener('DOMContentLoaded', () => {
    updateFooterYear();
});