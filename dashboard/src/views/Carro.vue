<template>
<div class="Carro">
<MenuLateral />
<EsquemaLavanderia msg="Carro"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompCarro',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
