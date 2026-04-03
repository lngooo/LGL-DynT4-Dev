define dso_local i32 @KJ(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  store i32 0, i32* %5
  br label %21
21:
  %22 = load i32, i32* %5
  %23 = load i32, i32* %4
  %24 = sdiv i32 %23, 2
  %25 = icmp slt i32 %22, %24
  br i1 %25, label %27, label %26
26:
  store i32 4, i32* %6
  br label %58
27:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %4
  %37 = sub nsw i32 %36, 1
  %38 = load i32, i32* %5
  %39 = sub nsw i32 %37, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %35, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %34, %43
  %45 = zext i1 %44 to i64
  %46 = select i1 %44, i32 1, i32 0
  store i32 %46, i32* %7
  %47 = load i32, i32* %7
  %48 = icmp ne i32 %47, 0
  br i1 %48, label %50, label %49
49:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %51
50:
  store i32 0, i32* %6
  br label %51
51:
  %53 = load i32, i32* %6
  switch i32 %53, label %58 [
    i32 0, label %54
  ]
54:
  br label %55
55:
  %56 = load i32, i32* %5
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %5
  br label %21
58:
  %60 = load i32, i32* %6
  switch i32 %60, label %62 [
    i32 4, label %61
  ]
61:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %62
62:
  %64 = load i32, i32* %2
  ret i32 %64
}
