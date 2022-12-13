<template>
<div class="banheiro">
<MenuLateral />
<EsquemaESP32 msg="Banheiro"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompBanheiro',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
