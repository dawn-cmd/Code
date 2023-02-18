# Generated by Django 3.2.4 on 2021-06-16 08:23

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('auctions', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Categories',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=64)),
            ],
        ),
        migrations.CreateModel(
            name='Acution_listing',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('title', models.CharField(max_length=64)),
                ('description', models.CharField(max_length=10000)),
                ('cover_url', models.CharField(max_length=2000)),
                ('category', models.ForeignKey(on_delete=django.db.models.deletion.PROTECT, related_name='item_category', to='auctions.categories')),
            ],
        ),
    ]
