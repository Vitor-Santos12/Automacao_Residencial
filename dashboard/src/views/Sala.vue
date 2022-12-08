<template>
<div class="Sala">
<MenuLateral />
<EsquemaLavanderia msg="Sala"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompSala',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
