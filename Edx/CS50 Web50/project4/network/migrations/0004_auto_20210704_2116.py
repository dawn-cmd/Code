# Generated by Django 3.2.4 on 2021-07-04 13:16

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('network', '0003_auto_20210704_1938'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='post',
            name='likes',
        ),
        migrations.AddField(
            model_name='user',
            name='likes',
            field=models.ManyToManyField(related_name='liker', to='network.Post'),
        ),
    ]
