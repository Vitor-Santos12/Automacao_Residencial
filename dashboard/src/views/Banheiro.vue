<template>
<div class="banheiro">
<MenuLateral />
<EsquemaLavanderia msg="Banheiro"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompBanheiro',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
