define dso_local void @jF9(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %10 = load i32, i32* %5
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %59
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = srem i32 %15, %14
  store i32 %16, i32* %6
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %6
  %22 = icmp sge i32 %20, %21
  br i1 %22, label %23, label %24
23:
  br label %56
24:
  %25 = load i32*, i32** %4
  %26 = getelementptr inbounds i32, i32* %25, i64 0
  %27 = load i32, i32* %26
  store i32 %27, i32* %9
  store i32 0, i32* %8
  br label %28
28:
  %29 = load i32, i32* %8
  %30 = load i32, i32* %5
  %31 = sub nsw i32 %30, 1
  %32 = icmp sge i32 %29, %31
  br i1 %32, label %33, label %34
33:
  br label %47
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %35, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %4
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  store i32 %40, i32* %44
  %45 = load i32, i32* %8
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %8
  br label %28
47:
  %48 = load i32, i32* %9
  %49 = load i32*, i32** %4
  %50 = load i32, i32* %5
  %51 = sub nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %49, i64 %52
  store i32 %48, i32* %53
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %7
  br label %19
56:
  br label %59
59:
  ret void
}
