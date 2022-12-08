<template>
<div class="Escritorio">
<MenuLateral />
<EsquemaLavanderia msg="Escritorio"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompEscritorio',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
