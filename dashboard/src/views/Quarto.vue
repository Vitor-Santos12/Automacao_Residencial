<template>
<div class="Quarto">
<MenuLateral />
<EsquemaLavanderia msg="Quarto"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompQuarto',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
