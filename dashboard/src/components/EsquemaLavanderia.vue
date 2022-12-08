<template>
    <div class="telaprincipal">
      <div class="card">
      <h1>{{ msg }}</h1>
      <p>
        For a guide and recipes on hdasdsadasdsadw to configure / customize this project,<br>
        check out the
        <a href="https://cli.vuejs.org" target="_blank" rel="noopener">vue-cli documentation</a>.
      </p>
      </div>
      <div class="card">
      <h3>Installed CLI Plugins</h3>
      <ul>
        sdfsdfsfsdfdfsdf
      </ul>
      </div>
      <div class="card">
      <h3>Essential Links</h3>
      <ul>
      sdfsdfsdfsdfsdfdsf
      </ul>
      </div>
      <div class="card">
      <h3>Ecosystem</h3>
      <ul>
       dfsdfsdfdsfsdfsdfdsf
      </ul>
    </div>
    </div>
  </template>

<script>
export default {
  name: 'EsquemaLavanderia',
  props: {
    msg: String
  }
}
</script>

  <!-- Add "scoped" attribute to limit CSS to this component only -->
  <style scoped lang="scss">
  .telaprincipal{
    background-color: rgb(139, 77, 77);
    height: 85%;
    width: 83%;
    position: absolute;
    right: 0em;
    margin: 0em auto 2em ;
    border-radius: 0.5em;
    border: 2px solid black;
    display: flex;
  }
  .telaprincipal .card{
    background-color: grey;
    height: 15em;
    width: 20em;
    margin: 1em;
    border-radius: 0.5em;
    border: 2px solid black;
  }
  h3 {
    margin: 40px 0 0;
  }
  ul {
    list-style-type: none;
    padding: 0;
  }
  li {
    display: inline-block;
    margin: 0 10px;
  }
  a {
    color: #42b983;
  }
  </style>
