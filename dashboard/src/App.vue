<template>
  <nav>
    <router-link to="/">Home</router-link> |
    <router-link to="/Lavanderia">Lavanderia</router-link> |
    <router-link to="/Sala">Sala</router-link> |
    <router-link to="/Quarto">Quarto</router-link> |
    <router-link to="/Banheiro">Banheiro</router-link> |
    <router-link to="/Escritorio">Escritório</router-link> |
    <router-link to="/Varanda">Varanda</router-link> |
    <router-link to="/Carro">Carro</router-link>
  </nav>
  <router-view/>
</template>

<style lang="scss">
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
}

nav {
border:1px black border;
height: 2em;
a {
    font-weight: bold;
    color: #2c3e50;
    &.router-link-exact-active {
      color: #42b983;
    }
  }
}
</style>
