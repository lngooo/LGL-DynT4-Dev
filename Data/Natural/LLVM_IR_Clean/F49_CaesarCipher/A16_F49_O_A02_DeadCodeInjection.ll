define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %5
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %64
18:
  %19 = load i8*, i8** %5
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp sge i32 %21, 65
  br i1 %22, label %23, label %39
23:
  %24 = load i8*, i8** %5
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp sle i32 %26, 90
  br i1 %27, label %28, label %39
28:
  %29 = load i8*, i8** %5
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = sub nsw i32 %31, 65
  %33 = load i32, i32* %6
  %34 = add nsw i32 %32, %33
  %35 = srem i32 %34, 26
  %36 = add nsw i32 %35, 65
  %37 = trunc i32 %36 to i8
  %38 = load i8*, i8** %5
  store i8 %37, i8* %38
  br label %61
39:
  %40 = load i8*, i8** %5
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp sge i32 %42, 97
  br i1 %43, label %44, label %60
44:
  %45 = load i8*, i8** %5
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp sle i32 %47, 122
  br i1 %48, label %49, label %60
49:
  %50 = load i8*, i8** %5
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = sub nsw i32 %52, 97
  %54 = load i32, i32* %6
  %55 = add nsw i32 %53, %54
  %56 = srem i32 %55, 26
  %57 = add nsw i32 %56, 97
  %58 = trunc i32 %57 to i8
  %59 = load i8*, i8** %5
  store i8 %58, i8* %59
  br label %60
60:
  br label %61
61:
  %62 = load i8*, i8** %5
  %63 = getelementptr inbounds i8, i8* %62, i32 1
  store i8* %63, i8** %5
  br label %14
64:
  ret void
}
