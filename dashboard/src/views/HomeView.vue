<template>
<div class="home">
<MenuLateral />
<HelloWorld msg="Welcome to Your Vue.js App"/>
</div>
</template>

<script>
// @ is an alias to /src
import HelloWorld from '@/components/HelloWorld.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'HomeView',
  components: {
    HelloWorld,
    MenuLateral
  }
}
</script>
