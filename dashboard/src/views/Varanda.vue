<template>
    <div class="var">
      <MenuLateral />
      <EsquemaLavanderia msg="Varanda" />
    </div>
  </template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompVaranda',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
