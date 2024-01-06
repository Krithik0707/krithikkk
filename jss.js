const searchButton = document.getElementById('search-button');
const searchInput = document.getElementById('search');
const movieList = document.getElementById('movie-list');

searchButton.addEventListener('click', () => {
	const searchTerm = searchInput.value.trim();
	if (searchTerm) {
		fetch(`https://api.themoviedb.org/3/search/movie?api_key=YOUR_API_KEY&query=${searchTerm}`)
			.then(response => response.json())
			.then(data => {
				movieList.innerHTML = '';
				data.results.forEach(movie => {
					const movieDiv = document.createElement('div');
					movieDiv.classList.add('movie');
					movieDiv.innerHTML = `
						<h3>${movie.title}</h3>
						<img src="https://image.tmdb.org/t/p/w500${movie.poster_path}" alt="${movie.title} poster">
					`;
					movieList.appendChild(movieDiv);
				});
			})
			.catch(error => console.error(error));
	}
});